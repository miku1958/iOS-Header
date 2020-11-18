//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet, NSString;

@interface PHFaceCollection : NSObject
{
    NSSet *_faces;
    NSString *_name;
    NSString *_identifier;
}

@property (readonly, nonatomic) NSSet *faces; // @synthesize faces=_faces;
@property (strong, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (readonly, nonatomic) NSString *name; // @synthesize name=_name;

+ (id)transientFaceCollectionForFaces:(id)arg1;
- (void).cxx_destruct;
- (id)assetsFromCollectionUsingOptions:(id)arg1;
- (id)facesFromCollectionUsingOptions:(id)arg1;
- (id)initWithFaces:(id)arg1;
- (id)keyFaceFromCollectionUsingOptions:(id)arg1;

@end

