//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSAttributedString, NSShadow;

@interface PXCTFramesetter : NSObject
{
    BOOL _prepared;
    NSAttributedString *_attributedString;
    struct CGContext *_context;
    const struct __CTFramesetter *_framesetter;
    NSShadow *_shadow;
}

@property (readonly, copy, nonatomic) NSAttributedString *attributedString; // @synthesize attributedString=_attributedString;
@property (readonly, nonatomic) struct CGContext *context; // @synthesize context=_context;
@property (readonly, nonatomic) const struct __CTFramesetter *framesetter; // @synthesize framesetter=_framesetter;
@property (readonly, nonatomic) NSShadow *shadow; // @synthesize shadow=_shadow;

- (void).cxx_destruct;
- (void)dealloc;
- (id)frameWithRect:(struct CGRect)arg1 maximumLineCount:(unsigned long long)arg2 allowTruncation:(BOOL)arg3;
- (id)init;
- (id)initWithAttributedString:(id)arg1 context:(struct CGContext *)arg2;
- (void)prepare;

@end

