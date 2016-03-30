//
//  UIDevice+ReportInfo.h
//  PLStreamReport
//
//  Created by 0dayZh on 16/3/14.
//  Copyright © 2016年 pili. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIDevice (ReportInfo)

- (NSString *)localIP;
- (NSString *)networkType;
- (CGFloat)appCpuUsage;

@end
