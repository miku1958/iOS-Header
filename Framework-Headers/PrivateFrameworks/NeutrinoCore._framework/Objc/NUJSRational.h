//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NeutrinoCore/NUJSRationalExport-Protocol.h>

@interface NUJSRational : NSObject <NUJSRationalExport>
{
    long long _numerator;
    long long _denominator;
}

@property long long denominator;
@property long long numerator;

- (id)init;
- (id)initWithNumerator:(long long)arg1 denominator:(long long)arg2;
- (double)toDouble;

@end

