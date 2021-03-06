//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIDraggingSessionConfiguration.h>

@class NSArray, UIView;

__attribute__((visibility("hidden")))
@interface UIDraggingBeginningSessionConfiguration : UIDraggingSessionConfiguration
{
    long long _dataOwner;
    UIView *_sourceView;
    NSArray *_items;
    struct CGPoint _initialCentroidInSourceWindow;
}

@property (readonly, nonatomic) long long dataOwner; // @synthesize dataOwner=_dataOwner;
@property (nonatomic) struct CGPoint initialCentroidInSourceWindow; // @synthesize initialCentroidInSourceWindow=_initialCentroidInSourceWindow;
@property (readonly, nonatomic) NSArray *items; // @synthesize items=_items;
@property (readonly, nonatomic) UIView *sourceView; // @synthesize sourceView=_sourceView;

+ (id)configurationWithItems:(id)arg1 dataOwner:(long long)arg2 initialCentroidInSourceWindow:(struct CGPoint)arg3 requiredContextIds:(id)arg4 sourceView:(id)arg5 accessibilityEndpoint:(id)arg6;
+ (id)configurationWithItems:(id)arg1 dataOwner:(long long)arg2 pointerTouch:(id)arg3 requiredContextIds:(id)arg4 sourceView:(id)arg5;
+ (id)configurationWithItems:(id)arg1 dataOwner:(long long)arg2 touches:(id)arg3 requiredContextIds:(id)arg4 sourceView:(id)arg5;
- (void).cxx_destruct;
- (id)initWithItems:(id)arg1 dataOwner:(long long)arg2 requiredContextIds:(id)arg3 sourceView:(id)arg4;

@end

