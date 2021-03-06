//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/INImage.h>

@class INImageBundle, NSString;

__attribute__((visibility("hidden")))
@interface _INBundleImage : INImage
{
    NSString *_imageName;
    INImageBundle *_imageBundle;
}

@property (copy, nonatomic) INImageBundle *imageBundle; // @synthesize imageBundle=_imageBundle;
@property (copy, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_URLRepresentation;
- (id)_bundleIdentifier;
- (id)_bundlePath;
- (id)_copyWithSubclass:(Class)arg1;
- (id)_dictionaryRepresentation;
- (id)_identifier;
- (id)_initWithURLRepresentation:(id)arg1;
- (BOOL)_isSystem;
- (void)_loadImageDataAndSizeWithHelper:(id)arg1 accessSpecifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_name;
- (BOOL)_requiresRetrieval;
- (void)_setBundleIdentifier:(id)arg1;
- (void)_setBundlePath:(id)arg1;
- (void)_setName:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStringRepresentation:(id)arg1;
- (id)stringRepresentation;

@end

