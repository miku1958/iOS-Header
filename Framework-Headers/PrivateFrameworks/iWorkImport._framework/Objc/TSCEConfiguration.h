//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface TSCEConfiguration : NSObject
{
    unsigned int mWarnWhenFormulasReferToEmptyCells:1;
}

+ (id)sharedCalculationEngineConfiguration;
- (id)init;
- (void)setWarnWhenFormulasReferToEmptyCells:(BOOL)arg1;
- (BOOL)warnWhenFormulasReferToEmptyCells;

@end

