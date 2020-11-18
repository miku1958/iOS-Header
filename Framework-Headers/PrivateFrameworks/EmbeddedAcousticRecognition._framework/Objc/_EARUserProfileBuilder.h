//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface _EARUserProfileBuilder : NSObject
{
    struct map<std::__1::basic_string<char>, std::__1::vector<std::__1::vector<quasar::LmeDataFactoryBase::Word, std::__1::allocator<quasar::LmeDataFactoryBase::Word>>, std::__1::allocator<std::__1::vector<quasar::LmeDataFactoryBase::Word, std::__1::allocator<quasar::LmeDataFactoryBase::Word>>>>, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, std::__1::vector<std::__1::vector<quasar::LmeDataFactoryBase::Word, std::__1::allocator<quasar::LmeDataFactoryBase::Word>>, std::__1::allocator<std::__1::vector<quasar::LmeDataFactoryBase::Word, std::__1::allocator<quasar::LmeDataFactoryBase::Word>>>>>>> _userData;
    struct shared_ptr<quasar::LmeDataFactory> _dataFactory;
    struct unique_ptr<sdapi::SdapiTokenizer, std::__1::default_delete<sdapi::SdapiTokenizer>> _tokenizer;
    struct unique_ptr<quasar::G2P, std::__1::default_delete<quasar::G2P>> _g2p;
    struct shared_ptr<quasar::PronCache<std::__1::basic_string<char>, std::__1::vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char>>>>> _pronCache;
    struct BasicTextSanitizer _sanitizer;
    struct unique_ptr<quasar::PersonalizationRecipe, std::__1::default_delete<quasar::PersonalizationRecipe>> _personalizationRecipe;
    struct unique_ptr<quasar::LmeData, std::__1::default_delete<quasar::LmeData>> _quasarLmeData;
}

+ (void)initialize;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addPersonalizationData:(id)arg1;
- (void)addPersonalizationJsonData:(id)arg1;
- (void)addWordWithParts:(id)arg1 templateName:(id)arg2;
- (id)dataProfile;
- (id)initWithConfiguration:(id)arg1 language:(id)arg2 overrides:(id)arg3 sdapiOverrides:(id)arg4 generalVoc:(id)arg5 emptyVoc:(id)arg6 pgVoc:(id)arg7 lexiconEnh:(id)arg8 tokenEnh:(id)arg9 paramsetHolder:(id)arg10;
- (id)initWithConfiguration:(id)arg1 language:(id)arg2 sdapiOverrides:(id)arg3 generalVoc:(id)arg4 emptyVoc:(id)arg5 pgVoc:(id)arg6 lexiconEnh:(id)arg7 tokenEnh:(id)arg8 paramsetHolder:(id)arg9;
- (id)initWithConfiguration:(id)arg1 withLanguage:(id)arg2 withSdapiOverrides:(id)arg3 withSdapiConfig:(id)arg4;
- (id)pronunciationsForOrthography:(id)arg1;
- (void)readUserProfile:(id)arg1;
- (void)removeAllWords;
- (id)sanitizedStringWithString:(id)arg1;
- (void)writeOutUserDataToJson:(id)arg1 withConfig:(id)arg2;

@end

