//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface _LTTranslationRange : NSObject
{
    BOOL _shouldTranslate;
    NSString *_identifier;
    NSString *_text;
    NSDictionary *_metaInfo;
}

@property (readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (copy, nonatomic) NSDictionary *metaInfo; // @synthesize metaInfo=_metaInfo;
@property (readonly, nonatomic) BOOL shouldTranslate; // @synthesize shouldTranslate=_shouldTranslate;
@property (readonly, copy, nonatomic) NSString *text; // @synthesize text=_text;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)arg1 text:(id)arg2 shouldTranslate:(BOOL)arg3;

@end
