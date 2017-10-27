//
//  ABCMessageMo.h
//  ABCCoreKit
//
//  Created by bing on 2017/8/12.
//  Copyright © 2017年 北京暄暄科技有限公司. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ABCMessageMo : NSObject

@property(nonatomic, strong) NSString *uid;
@property(nonatomic, strong) NSString *name;
@property(nonatomic, strong) NSString *msgValue;
@property(nonatomic, strong) NSString *iconUrl;
@property(nonatomic, assign) long long  msgTime;
@property(nonatomic, assign) NSInteger type;//0 普通消息 1系统消息

@end
