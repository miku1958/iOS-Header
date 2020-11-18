//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <LinkPresentation/LPCSSText-Protocol.h>
#import <LinkPresentation/LPHTMLAttributeText-Protocol.h>

__attribute__((visibility("hidden")))
@interface LPPointUnit : NSObject <LPCSSText, LPHTMLAttributeText>
{
    double _value;
}

@property (readonly, nonatomic) double value; // @synthesize value=_value;

+ (id)zero;
- (id)_lp_CSSText;
- (id)_lp_HTMLAttributeText;
- (id)initWithValue:(double)arg1;

@end
