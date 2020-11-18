//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class DCService, NSString;

@interface DCRelativePath : NSObject
{
    DCService *_service;
    NSString *_string;
    NSString *_firstPathComponent;
}

@property (readonly, strong) NSString *firstPathComponent; // @synthesize firstPathComponent=_firstPathComponent;
@property (readonly, strong) NSString *lastPathComponent;
@property (readonly, strong) DCService *service; // @synthesize service=_service;
@property (readonly, strong) NSString *string; // @synthesize string=_string;

+ (id)relativePathWithString:(id)arg1 forService:(id)arg2;
+ (id)rootForService:(id)arg1;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)description;
- (BOOL)isRoot;
- (id)metadataPath;
- (id)relativePathByAppendingPath:(id)arg1;
- (id)relativePathByAppendingPathComponent:(id)arg1;
- (id)relativePathByDeletingLastPathComponent;
- (id)relativePathForAssetType:(id)arg1 withUnderlyingItemDocumentIdentifier:(id)arg2;

@end

