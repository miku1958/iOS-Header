//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>

@class NSString;

@interface _UIContentViewEditingState : NSObject <NSCopying>
{
    NSString *_text;
    NSString *_proposedReplacementText;
    struct _NSRange _proposedReplacementRange;
}

@property (readonly, nonatomic) struct _NSRange proposedReplacementRange; // @synthesize proposedReplacementRange=_proposedReplacementRange;
@property (readonly, nonatomic) NSString *proposedReplacementText; // @synthesize proposedReplacementText=_proposedReplacementText;
@property (readonly, nonatomic) NSString *text; // @synthesize text=_text;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithText:(id)arg1;
- (id)initWithText:(id)arg1 proposedReplacementText:(id)arg2 proposedReplacementRange:(struct _NSRange)arg3;

@end

