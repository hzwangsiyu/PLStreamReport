//
//  PLStreamReport.h
//  PLStreamingKit
//
//  Created by bailong on 16/1/15.
//  Copyright © 2016年 pili-engineering. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSUInteger, PLMethod) {
    PLPlay,
    PLPublish,
};

typedef NS_ENUM(NSUInteger, NetWorkType) {
    NetWorkType_None = 0,
    NetWorkType_WIFI,
    NetWorkType_MOBILE,
};

@interface PLStreamReport : NSObject

+(NSString*) localIp;

+(NSString*) device;

+(NSString*) netType;

+(NSString*) ipStr:(uint32_t)ip;

+(instancetype)sharedInstance;

-(instancetype)init:(NSString*)server;

-(void) reportError:(PLMethod)method
                url:(NSString*)url
           serverIp:(NSString*)serverIp
          dnsServer:(NSString*)dnsServer
               code:(NSInteger)code
              error:(NSString*)error;

-(void) reportConnection:(PLMethod)method
                     url:(NSString*)url
                serverIp:(NSString*)serverIp
               dnsServer:(NSString*)dnsServer
                 dnsTime:(NSUInteger)dnsTime
             connectTime:(NSUInteger)connectTime
           handshakeTime:(NSUInteger)handshakeTime;

-(void) reportRealTimeStatus:(PLMethod)method
                         url:(NSString*)url
                    serverIp:(NSString*)serverIp
                    audioFps:(NSInteger)audioFps
                    videoFps:(NSInteger)videoFps
                     bitrate:(NSInteger)bitrate;
@end
