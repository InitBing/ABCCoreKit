//
//  ABCCloudFileMo.h
//  ABCCoreKit
//
//  Created by bing on 2017/8/14.
//  Copyright © 2017年 北京暄暄科技有限公司. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ABCCloudFileMo : NSObject

@property(nonatomic,strong) NSString *filename;
@property(nonatomic,strong) NSString *size;
@property(nonatomic,strong) NSString *last_modified_time;
@property(nonatomic,strong) NSString *url;

@end
