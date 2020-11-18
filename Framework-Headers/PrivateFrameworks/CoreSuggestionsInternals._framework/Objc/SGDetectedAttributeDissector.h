//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreSuggestionsInternals/SGPipelineDissector.h>

@interface SGDetectedAttributeDissector : SGPipelineDissector
{
}

+ (void)initialize;
+ (BOOL)isAddressContext:(id)arg1;
+ (BOOL)isPhoneContext:(id)arg1;
- (id)_extractEmailishTokenFromMailHeader:(id)arg1;
- (id)_makeAlnum:(id)arg1;
- (id)_makeSimplifiedListIdEmail:(id)arg1;
- (id)detailTypeFromPrefix:(id)arg1;
- (id)detailTypeFromPrefix:(id)arg1 detectedLabelPointer:(struct _NSRange *)arg2;
- (id)detectionFromBodyDDMatch:(id)arg1 onEntity:(id)arg2;
- (id)detectionFromSignatureDDMatch:(id)arg1 onEntity:(id)arg2 detectedLabelRange:(struct _NSRange *)arg3 lastClaimedLabelRange:(struct _NSRange)arg4;
- (void)dissectInternal:(id)arg1;
- (id)filterDangerousSigAddressDetections:(id)arg1 onEntity:(id)arg2;
- (id)filterDangerousSigDetections:(id)arg1 onEntity:(id)arg2;
- (id)filterDangerousSigEmailDetections:(id)arg1 onEntity:(id)arg2;
- (id)filterDangerousSigPhoneDetections:(id)arg1 onEntity:(id)arg2;
- (id)getLineContaining:(struct _NSRange)arg1 inText:(id)arg2;

@end

