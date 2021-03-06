//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreHandwriting/CHRecognizing-Protocol.h>

@class NSCharacterSet, NSLocale, NSString, NSXPCConnection;

@interface CHRemoteRecognizer : NSObject <CHRecognizing>
{
    BOOL _enableCachingIfAvailable;
    BOOL _enableGen2ModelIfAvailable;
    BOOL _enableGen2CharacterLMIfAvailable;
    BOOL _shouldUseTextReplacements;
    int _recognitionMode;
    int _contentType;
    int _autoCapitalizationMode;
    NSLocale *_locale;
    NSCharacterSet *_activeCharacterSet;
    unsigned long long _maxRecognitionResultCount;
    long long _priority;
    NSXPCConnection *__connection;
    struct CGSize _minimumDrawingSize;
}

@property (readonly, nonatomic) NSXPCConnection *_connection; // @synthesize _connection=__connection;
@property (strong, nonatomic) NSCharacterSet *activeCharacterSet; // @synthesize activeCharacterSet=_activeCharacterSet;
@property (nonatomic) int autoCapitalizationMode; // @synthesize autoCapitalizationMode=_autoCapitalizationMode;
@property (nonatomic) int contentType; // @synthesize contentType=_contentType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL enableCachingIfAvailable; // @synthesize enableCachingIfAvailable=_enableCachingIfAvailable;
@property (readonly, nonatomic) BOOL enableGen2CharacterLMIfAvailable; // @synthesize enableGen2CharacterLMIfAvailable=_enableGen2CharacterLMIfAvailable;
@property (readonly, nonatomic) BOOL enableGen2ModelIfAvailable; // @synthesize enableGen2ModelIfAvailable=_enableGen2ModelIfAvailable;
@property (readonly) unsigned long long hash;
@property (readonly, copy, nonatomic) NSLocale *locale; // @synthesize locale=_locale;
@property (nonatomic) unsigned long long maxRecognitionResultCount; // @synthesize maxRecognitionResultCount=_maxRecognitionResultCount;
@property (nonatomic) struct CGSize minimumDrawingSize; // @synthesize minimumDrawingSize=_minimumDrawingSize;
@property (nonatomic) long long priority; // @synthesize priority=_priority;
@property (readonly, nonatomic) int recognitionMode; // @synthesize recognitionMode=_recognitionMode;
@property (nonatomic) BOOL shouldUseTextReplacements; // @synthesize shouldUseTextReplacements=_shouldUseTextReplacements;
@property (readonly) Class superclass;

+ (long long)absoluteMaxStrokeCountPerRequest;
+ (long long)maxRequestStrokeCountForLocale:(id)arg1;
- (id)_recognitionRequestWithDrawing:(id)arg1 options:(id)arg2;
- (id)_recognitionResultForRequest:(id)arg1 error:(id *)arg2;
- (void)_setupXPCConnectionIfNeeded;
- (void)_teardownXPCConnection;
- (void)dealloc;
- (id)initWithMode:(int)arg1 locale:(id)arg2;
- (id)initWithMode:(int)arg1 locale:(id)arg2 recognizerOptions:(id)arg3;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToRemoteRecognizer:(id)arg1;
- (id)textRecognitionResultForDrawing:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)transcriptionPathsForTokenizedTextResult:(id)arg1 withHistory:(id)arg2 scores:(id *)arg3 error:(id *)arg4;

@end

