//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MAAsset, NSAttributedString, NSDictionary, NSString;

@interface DUDefinitionValue : NSObject
{
    NSAttributedString *_definition;
    NSString *_longDefinition;
    NSDictionary *_definitionElements;
    NSString *_localizedDictionaryName;
    NSString *_term;
    MAAsset *_rawAsset;
    struct __CFArray *_foundRecordRefs;
}

@property (readonly) NSAttributedString *definition; // @synthesize definition=_definition;
@property (readonly) NSDictionary *definitionElements; // @synthesize definitionElements=_definitionElements;
@property struct __CFArray *foundRecordRefs; // @synthesize foundRecordRefs=_foundRecordRefs;
@property (readonly) NSString *localizedDictionaryName; // @synthesize localizedDictionaryName=_localizedDictionaryName;
@property (readonly) NSString *longDefinition; // @synthesize longDefinition=_longDefinition;
@property (strong, nonatomic) MAAsset *rawAsset; // @synthesize rawAsset=_rawAsset;
@property (readonly) NSString *term; // @synthesize term=_term;

- (void).cxx_destruct;
- (id)_HTMLDefinitionForType:(long long)arg1;
- (void)dealloc;
- (id)description;
- (id)initWithDefinitionDictionary:(id)arg1 term:(id)arg2;

@end
