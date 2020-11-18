//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface MLLoader : NSObject
{
}

+ (BOOL)checkAssetPath:(id)arg1 error:(id *)arg2;
+ (id)loadModelFromArchive:(struct _MLModelInputArchiver *)arg1 configuration:(id)arg2 error:(id *)arg3;
+ (id)loadModelFromArchive:(struct _MLModelInputArchiver *)arg1 error:(id *)arg2;
+ (id)loadModelFromAssetAtURL:(id)arg1 configuration:(id)arg2 error:(id *)arg3;
+ (id)loadModelFromAssetAtURL:(id)arg1 error:(id *)arg2;
+ (id)loadUpdatableModelFromArchive:(struct _MLModelInputArchiver *)arg1 configuration:(id)arg2 error:(id *)arg3;
+ (id)loadUpdatableModelFromAssetAtURL:(id)arg1 configuration:(id)arg2 error:(id *)arg3;
+ (BOOL)unarchiveCodedModelFrom:(struct _MLModelInputArchiver *)arg1 to:(id *)arg2 error:(id *)arg3;

@end
