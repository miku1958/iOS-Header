//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UserNotificationsUIKit/NSObject-Protocol.h>

@class NSArray, NSString;

@protocol NCAuxiliaryOptionsProviding <NSObject>

@property (nonatomic) BOOL auxiliaryOptionsVisible;
@property (readonly, nonatomic) unsigned long long numberOfOptionButtons;
@property (readonly, copy, nonatomic) NSString *optionsSummaryText;
@property (readonly, copy, nonatomic) NSString *optionsSummaryTitle;

- (void)configureOptionButtons:(NSArray *)arg1;

@optional
@end

