//
//  BDVideoChatModel.h
//  BluedInternational
//
//  Created by Mark on 2020/3/12.
//  Copyright © 2020 Blue City Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
NS_ASSUME_NONNULL_BEGIN

@interface BDVideoChatModel : NSObject

@property (nonatomic, copy) NSString *userId;
@property (nonatomic, copy) NSString *userName;
@property (nonatomic, copy) NSString *avatar;
@property (nonatomic, assign) uint badge;
//是否是语音模式
@property (nonatomic, assign) BOOL isAudioMode;

@end

NS_ASSUME_NONNULL_END
