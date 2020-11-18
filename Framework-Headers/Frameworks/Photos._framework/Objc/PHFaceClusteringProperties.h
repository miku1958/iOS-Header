//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Photos/PHFacePropertySet.h>

@class NSString, PHFaceprint;

@interface PHFaceClusteringProperties : PHFacePropertySet
{
    PHFaceprint *_faceprint;
    NSString *_groupingIdentifier;
}

@property (readonly, nonatomic) PHFaceprint *faceprint; // @synthesize faceprint=_faceprint;
@property (readonly, nonatomic) NSString *groupingIdentifier; // @synthesize groupingIdentifier=_groupingIdentifier;

+ (id)entityName;
+ (id)keyPathFromPrimaryObject;
+ (id)keyPathToPrimaryObject;
+ (id)propertiesToFetch;
+ (id)propertySetName;
- (void).cxx_destruct;
- (id)initWithFetchDictionary:(id)arg1 face:(id)arg2 prefetched:(BOOL)arg3;

@end
