//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class VNFaceprint;

@interface VCPFaceTimeFace : NSObject
{
    VNFaceprint *_faceprint;
}

@property (strong, nonatomic) VNFaceprint *faceprint; // @synthesize faceprint=_faceprint;

+ (id)face;
+ (id)faceFromManagedObject:(id)arg1;
- (void).cxx_destruct;
- (id)description;
- (id)managedObjectForContext:(id)arg1;

@end
