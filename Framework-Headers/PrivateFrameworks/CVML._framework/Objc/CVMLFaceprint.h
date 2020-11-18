//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <CVML/CVMLFaceprintModel-Protocol.h>
#import <CVML/NSSecureCoding-Protocol.h>

@class NSData, NSString;

@interface CVMLFaceprint : NSObject <CVMLFaceprintModel, NSSecureCoding>
{
    unsigned int _platform;
    unsigned int _profile;
    NSData *_faceprint;
    NSString *_key;
    NSString *_faceprintInputPath;
}

@property (strong) NSData *faceprint; // @synthesize faceprint=_faceprint;
@property (copy) NSString *faceprintInputPath; // @synthesize faceprintInputPath=_faceprintInputPath;
@property (copy) NSString *key; // @synthesize key=_key;
@property unsigned int platform; // @synthesize platform=_platform;
@property unsigned int profile; // @synthesize profile=_profile;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)computeDistanceToFaceprint:(id)arg1 withDistanceFunction:(long long)arg2 error:(id *)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
