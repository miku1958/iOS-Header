//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumberFormatter;

@interface _PXFormatterManager : NSObject
{
    NSNumberFormatter *_countFormatter;
    NSNumberFormatter *_percentFormatter;
}

@property (readonly, nonatomic) NSNumberFormatter *countFormatter; // @synthesize countFormatter=_countFormatter;
@property (readonly, nonatomic) NSNumberFormatter *percentFormatter; // @synthesize percentFormatter=_percentFormatter;

+ (id)sharedManager;
- (void).cxx_destruct;
- (void)_localeDidChange:(id)arg1;
- (id)init;

@end

