//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSFormatter.h>

@interface HFValueSetFormatter : NSFormatter
{
    long long _unitStyle;
    CDUnknownBlockType _stringProvider;
}

@property (copy, nonatomic) CDUnknownBlockType stringProvider; // @synthesize stringProvider=_stringProvider;
@property (nonatomic) long long unitStyle; // @synthesize unitStyle=_unitStyle;

+ (id)formatterWithStringProvider:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithStringProvider:(CDUnknownBlockType)arg1;
- (id)stringForObjectValue:(id)arg1;

@end
