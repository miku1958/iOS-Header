//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ActionKit/FATObject.h>

@class NSNumber;

@interface EDAMNoteLimits : FATObject
{
    NSNumber *_noteResourceCountMax;
    NSNumber *_uploadLimit;
    NSNumber *_resourceSizeMax;
    NSNumber *_noteSizeMax;
    NSNumber *_uploaded;
}

@property (strong, nonatomic) NSNumber *noteResourceCountMax; // @synthesize noteResourceCountMax=_noteResourceCountMax;
@property (strong, nonatomic) NSNumber *noteSizeMax; // @synthesize noteSizeMax=_noteSizeMax;
@property (strong, nonatomic) NSNumber *resourceSizeMax; // @synthesize resourceSizeMax=_resourceSizeMax;
@property (strong, nonatomic) NSNumber *uploadLimit; // @synthesize uploadLimit=_uploadLimit;
@property (strong, nonatomic) NSNumber *uploaded; // @synthesize uploaded=_uploaded;

+ (id)structFields;
+ (id)structName;
- (void).cxx_destruct;

@end

