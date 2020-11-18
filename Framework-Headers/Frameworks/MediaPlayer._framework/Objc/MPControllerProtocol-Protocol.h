//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/NSObject-Protocol.h>

@class MPAVController, MPAVItem, UIView;

@protocol MPControllerProtocol <NSObject>

@property (weak, nonatomic) id delegate;
@property (strong, nonatomic) MPAVItem *item;
@property (nonatomic) long long orientation;
@property (strong, nonatomic) MPAVController *player;
@property (readonly, strong, nonatomic) UIView *view;

- (void)clearWeakReferencesToObject:(id)arg1;
- (void)noteIgnoredChangeTypes:(unsigned long long)arg1;
- (void)setOrientation:(long long)arg1 animate:(BOOL)arg2;
@end
