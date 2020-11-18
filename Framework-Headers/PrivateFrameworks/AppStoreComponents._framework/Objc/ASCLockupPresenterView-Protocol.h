//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppStoreComponents/NSObject-Protocol.h>

@class NSString, UIImage;

@protocol ASCLockupPresenterView <NSObject>

@property (readonly, nonatomic) struct CGSize preferredIconSize;

- (void)setHeading:(NSString *)arg1;
- (void)setIconImage:(UIImage *)arg1 withDecoration:(NSString *)arg2;
- (void)setLoading:(BOOL)arg1;
- (void)setPrefersRightToLeftLayout:(BOOL)arg1;
- (void)setSubtitle:(NSString *)arg1;
- (void)setTitle:(NSString *)arg1;
@end
