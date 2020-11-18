//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/UITextInputTokenizer-Protocol.h>

@class NSString, UIResponder;
@protocol UITextInput;

@interface UITextInputStringTokenizer : NSObject <UITextInputTokenizer>
{
    UIResponder<UITextInput> *_textInput;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)_closestTokenSubrangeForPosition:(id)arg1 granularity:(long long)arg2 downstream:(BOOL)arg3;
- (long long)_indexForTextPosition:(id)arg1;
- (BOOL)_isDownstreamForDirection:(long long)arg1 atPosition:(id)arg2;
- (id)_positionFromPosition:(id)arg1 offset:(unsigned long long)arg2 affinity:(long long)arg3;
- (id)initWithTextInput:(id)arg1;
- (BOOL)isPosition:(id)arg1 atBoundary:(long long)arg2 inDirection:(long long)arg3;
- (BOOL)isPosition:(id)arg1 withinTextUnit:(long long)arg2 inDirection:(long long)arg3;
- (id)positionFromPosition:(id)arg1 toBoundary:(long long)arg2 inDirection:(long long)arg3;
- (id)rangeEnclosingPosition:(id)arg1 withGranularity:(long long)arg2 inDirection:(long long)arg3;

@end
