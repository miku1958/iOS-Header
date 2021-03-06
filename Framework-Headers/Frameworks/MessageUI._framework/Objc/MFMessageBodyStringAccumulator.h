//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MessageUI/MFMessageBodyStringAccumulator-Protocol.h>

@class NSMutableString, NSString;

@interface MFMessageBodyStringAccumulator : NSObject <MFMessageBodyStringAccumulator>
{
    NSMutableString *_accumulatedString;
    unsigned long long _remainingLength;
    int _options;
    int _lastEntity;
    unsigned long long _lastCustomEntityTag;
    BOOL _isFull;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)accumulatedString;
- (void)appendCharacters:(const unsigned short *)arg1 length:(unsigned long long)arg2;
- (void)appendCustomEntityWithTag:(unsigned long long)arg1 stringRepresentation:(id)arg2;
- (void)appendInnerTextWithConsumableNode:(id)arg1;
- (void)appendNewline;
- (void)appendRange:(struct _NSRange)arg1 ofString:(id)arg2;
- (void)appendString:(id)arg1;
- (void)dealloc;
- (id)initWithOptions:(int)arg1 lengthLimit:(unsigned long long)arg2;
- (BOOL)isFull;

@end

