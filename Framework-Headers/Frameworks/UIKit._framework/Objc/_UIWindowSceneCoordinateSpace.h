//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/UICoordinateSpace-Protocol.h>

@class FBSSceneSettings, NSString, UIWindowScene;

__attribute__((visibility("hidden")))
@interface _UIWindowSceneCoordinateSpace : NSObject <UICoordinateSpace>
{
    FBSSceneSettings *_effectiveSettings;
    UIWindowScene *_windowScene;
}

@property (readonly, nonatomic) struct CGRect bounds;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, weak, nonatomic) UIWindowScene *windowScene; // @synthesize windowScene=_windowScene;

- (void).cxx_destruct;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromCoordinateSpace:(id)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 toCoordinateSpace:(id)arg2;
- (struct CGRect)convertRect:(struct CGRect)arg1 fromCoordinateSpace:(id)arg2;
- (struct CGRect)convertRect:(struct CGRect)arg1 toCoordinateSpace:(id)arg2;
- (id)initWithWindowScene:(id)arg1 effectiveSettings:(id)arg2;

@end
