//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface TSTStockDetails : NSObject
{
    NSString *_symbol;
    long long _attribute;
}

@property (nonatomic) long long attribute; // @synthesize attribute=_attribute;
@property (strong, nonatomic) NSString *symbol; // @synthesize symbol=_symbol;

+ (id)detailsWithSymbol:(id)arg1 attribute:(long long)arg2;
- (void).cxx_destruct;
- (id)initWithSymbol:(id)arg1 attribute:(long long)arg2;
- (BOOL)isEqualToStockDetails:(id)arg1;

@end
