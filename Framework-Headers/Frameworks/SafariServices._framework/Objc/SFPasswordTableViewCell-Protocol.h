//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SafariServices/NSObject-Protocol.h>

@class NSString, UIColor, UIImage, WBSSavedPassword;

@protocol SFPasswordTableViewCell <NSObject>

@property (readonly, nonatomic) WBSSavedPassword *savedPassword;

- (void)setIcon:(UIImage *)arg1;
- (void)showPlaceholderImageForDomain:(NSString *)arg1 backgroundColor:(UIColor *)arg2;
@end
