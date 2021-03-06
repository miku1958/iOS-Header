//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PencilKit/NSObject-Protocol.h>

@class PKScribbleInteraction;
@protocol NSObject><NSCopying;

@protocol PKScribbleInteractionElementSource <NSObject>
- (void)_scribbleInteraction:(PKScribbleInteraction *)arg1 focusElement:(id<NSObject><NSCopying>)arg2 initialFocusSelectionReferencePoint:(struct CGPoint)arg3 completion:(void (^)(id<UITextInput>))arg4;
- (struct CGRect)_scribbleInteraction:(PKScribbleInteraction *)arg1 frameForElement:(id<NSObject><NSCopying>)arg2;
- (void)_scribbleInteraction:(PKScribbleInteraction *)arg1 requestElementsInRect:(struct CGRect)arg2 completion:(void (^)(NSArray *, long long))arg3;

@optional
- (void)_scribbleInteraction:(PKScribbleInteraction *)arg1 focusElement:(id<NSObject><NSCopying>)arg2 completion:(void (^)(id<UITextInput>))arg3;
@end

