//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaMiningKit/CLSInformant.h>

@interface CLSClassificationInformant : CLSInformant
{
}

+ (id)classIdentifier;
+ (id)familyIdentifier;
+ (id)informantDependenciesIdentifiers;
- (double)_confidenceForCount:(unsigned long long)arg1 mu:(double)arg2 sigma:(double)arg3;
- (id)gatherCluesOperationForInvestigation:(id)arg1;
- (id)init;

@end

