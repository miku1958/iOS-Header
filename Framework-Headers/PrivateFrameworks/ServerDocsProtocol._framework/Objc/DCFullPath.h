//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class DCService, NSData, NSString, NSURL;

@interface DCFullPath : NSObject
{
    DCService *_service;
    NSString *_string;
}

@property (readonly, strong) NSData *documentIdentifier;
@property (readonly, strong) DCService *service; // @synthesize service=_service;
@property (readonly, strong) NSString *string; // @synthesize string=_string;
@property (readonly, strong) NSURL *url;

+ (id)_fullPathWithDocumentIdentifier:(id)arg1 name:(id)arg2 forService:(id)arg3;
+ (id)_fullPathWithRoot:(id)arg1 documentIdentifier:(id)arg2 name:(id)arg3 forService:(id)arg4;
+ (id)_fullPathWithString:(id)arg1 forService:(id)arg2;
+ (id)_uploadDirectoryNameWithParentRelativePath:(id)arg1;
+ (id)documentRootForService:(id)arg1;
+ (id)fullPathWithDocumentIdentifier:(id)arg1 relativePath:(id)arg2;
+ (id)fullPathWithString:(id)arg1 forService:(id)arg2;
+ (id)fullPathWithString:(id)arg1 relativePath:(id)arg2;
+ (id)metadataFullPathWithDocumentIdentifier:(id)arg1 name:(id)arg2 forService:(id)arg3;
+ (id)metadataRootForService:(id)arg1;
+ (id)uploadFullPathWithParentRelativePath:(id)arg1 name:(id)arg2;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)description;

@end

