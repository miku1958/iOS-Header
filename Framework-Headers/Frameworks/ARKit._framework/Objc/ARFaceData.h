//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ARKit/NSSecureCoding-Protocol.h>

@class NSArray, NSDictionary;

@interface ARFaceData : NSObject <NSSecureCoding>
{
    NSArray *_detectedFaces;
    NSDictionary *_faceMeshPayload;
}

@property (strong, nonatomic) NSArray *detectedFaces; // @synthesize detectedFaces=_detectedFaces;
@property (strong, nonatomic) NSDictionary *faceMeshPayload; // @synthesize faceMeshPayload=_faceMeshPayload;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end
