//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Photos/PHFacePropertySet-Protocol.h>

@class NSString, PHFace;

@interface PHFacePropertySet : NSObject <PHFacePropertySet>
{
    PHFace *_face;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, weak, nonatomic) PHFace *face; // @synthesize face=_face;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)entityName;
+ (BOOL)isToMany;
+ (id)keyPathFromPrimaryObject;
+ (id)keyPathToPrimaryObject;
+ (id)propertiesToFetch;
+ (id)propertiesToPrefetch;
+ (id)propertySetName;
- (void).cxx_destruct;
- (id)initWithFetchDictionary:(id)arg1 face:(id)arg2 prefetched:(BOOL)arg3;

@end
