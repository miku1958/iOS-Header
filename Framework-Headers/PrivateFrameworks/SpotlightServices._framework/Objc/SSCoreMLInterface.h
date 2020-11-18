//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MLModel, MLModelAsset;

@interface SSCoreMLInterface : NSObject
{
    MLModelAsset *asset;
    MLModel *model;
}

- (void).cxx_destruct;
- (id)getDescription;
- (id)getVersionString;
- (id)initSpecificModel:(id)arg1 error:(id *)arg2;
- (id)initWithURL:(id)arg1 error:(id *)arg2;
- (double)predict:(id)arg1 error:(id *)arg2 isL2:(BOOL)arg3;

@end

