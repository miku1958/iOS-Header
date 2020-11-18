//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RemoteUI/NSObject-Protocol.h>

@class NSDictionary, NSString, RUIObjectModel, UILabel, UIView;

@protocol RUITopLevelPageElement <NSObject>
- (void)populatePostbackDictionary:(NSDictionary *)arg1;
- (void)setObjectModel:(RUIObjectModel *)arg1;
- (UIView *)view;

@optional
- (void)setTitle:(NSString *)arg1;
- (UILabel *)titleLabel;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLayout;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
@end

