//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSuggestionsInternals/PMLTransformerProtocol-Protocol.h>

@class NSLinguisticTagger, NSString;

@interface SGTokenizerMappingTransformer : NSObject <PMLTransformerProtocol>
{
    NSLinguisticTagger *_tagger;
    BOOL _nameTagging;
    NSString *_punctuationMapping;
    NSString *_personalNameMapping;
    NSString *_locale;
    void *_nlpTagger;
    int _linguisticDataNotificationToken;
}

+ (id)forLocale:(id)arg1;
+ (id)forLocale:(id)arg1 withNameTagging:(BOOL)arg2 personalNameMapping:(id)arg3 punctuationMapping:(id)arg4;
+ (id)forLocale:(id)arg1 withPersonalNameMapping:(id)arg2;
- (void).cxx_destruct;
- (void)_registerForNotifications;
- (void)dealloc;
- (id)initForLocale:(id)arg1 withNameTagging:(BOOL)arg2 personalNameMapping:(id)arg3 punctuationMapping:(id)arg4;
- (id)transform:(id)arg1;
- (void)transformWithCoreNLP:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)transformWithNLLinguisticTagger:(id)arg1 block:(CDUnknownBlockType)arg2;

@end
