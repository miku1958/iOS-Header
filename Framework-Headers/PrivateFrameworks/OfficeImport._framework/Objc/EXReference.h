//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface EXReference : NSObject
{
}

+ (BOOL)edAreaReferenceFromXmlReference:(id)arg1 areaReference:(struct EDAreaReference *)arg2;
+ (id)edDiscontinousReferencesFromXmlRanges:(id)arg1;
+ (id)edReferenceFromXmlReference:(id)arg1;
+ (id)numberToStringBase26:(int)arg1;
+ (id)xmlRangesFromDiscontinuousReferences:(id)arg1;
+ (id)xmlReferenceFromAreaReference:(struct EDAreaReference *)arg1;
+ (id)xmlReferenceFromEDReference:(id)arg1;

@end

