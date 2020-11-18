//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OpusKit/OKProducerBundle.h>

@class NSArray, OKProducerContent;

@interface OKProducerPlugin : OKProducerBundle
{
    Class _producerClass;
    long long _loadCounter;
    NSArray *_loadedClasses;
    OKProducerContent *_content;
}

@property (strong, nonatomic) OKProducerContent *content; // @synthesize content=_content;

- (id)URLForResource:(id)arg1 withExtension:(id)arg2;
- (void)_bundleDidLoad:(id)arg1;
- (BOOL)_load;
- (void)_unload;
- (id)audioURLs;
- (id)backgroundColor;
- (id)contentIdentifier;
- (void)dealloc;
- (id)exportedClassNames;
- (unsigned long long)family;
- (id)guidelinesFromLegacyData:(id)arg1 withMediaURLs:(id)arg2 andMediaLookupDelegate:(id)arg3;
- (BOOL)hasExportedClass:(Class)arg1;
- (BOOL)hasLoadedClass:(Class)arg1;
- (id)init;
- (id)initWithURL:(id)arg1;
- (BOOL)isLoaded;
- (BOOL)loadRetain;
- (id)localizedName;
- (id)localizedStringForKey:(id)arg1 value:(id)arg2 table:(id)arg3;
- (double)minimumContentVersion;
- (id)producerWithPresentation:(id)arg1;
- (void)setupJavascriptContext:(id)arg1;
- (id)supportedResolutions;
- (void)unloadRelease;

@end

