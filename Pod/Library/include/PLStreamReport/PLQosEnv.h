//
//  PLQosEnv.h
//  PLStreamReport
//
//  Created by bailong on 16/4/28.
//  Copyright © 2016年 pili. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface PLQosEnv : NSObject

+(void)initEnv;

+(BOOL)isInited;

+(void)enableQos:(BOOL)flag;



@end
