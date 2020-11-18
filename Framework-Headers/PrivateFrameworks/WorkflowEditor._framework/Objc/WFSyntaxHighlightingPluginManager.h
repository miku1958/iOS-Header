//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class JSContext, JSManagedValue, NSMutableArray;

@interface WFSyntaxHighlightingPluginManager : NSObject
{
    JSContext *_context;
    NSMutableArray *_tokenLines;
    unsigned long long _minimumChangedLine;
    unsigned long long _maxChangedLine;
    JSManagedValue *_colorScheme;
    JSManagedValue *_highlightingPlugin;
    JSManagedValue *_syntaxPlugin;
    unsigned long long _syntaxHighlightingType;
    unsigned long long _syntaxHighlightingAppearance;
}

@property (nonatomic) unsigned long long syntaxHighlightingAppearance; // @synthesize syntaxHighlightingAppearance=_syntaxHighlightingAppearance;
@property (nonatomic) unsigned long long syntaxHighlightingType; // @synthesize syntaxHighlightingType=_syntaxHighlightingType;

- (void).cxx_destruct;
- (id)configurationFilesForAppearance:(unsigned long long)arg1;
- (void)dealloc;
- (id)defaultBackgroundColor;
- (id)defaultForegroundColor;
- (void)didAddLineAtIndex:(unsigned long long)arg1;
- (BOOL)didChangeLine:(unsigned long long)arg1 string:(id)arg2;
- (void)didRemoveLineAtIndex:(unsigned long long)arg1;
- (void)discardManagedReferencesForLineNumber:(unsigned long long)arg1;
- (void)highlightAllTokensWithCallback:(CDUnknownBlockType)arg1;
- (id)init;
- (void)loadColorSchemePlugin;
- (void)loadHighlightingPlugin;
- (id)loadPluginUsingConfigWithModuleName:(id)arg1 module:(id)arg2;
- (void)loadPlugins;
- (void)loadSyntaxPlugin;
- (void)reloadPlugins;
- (void)unloadPlugins;

@end
