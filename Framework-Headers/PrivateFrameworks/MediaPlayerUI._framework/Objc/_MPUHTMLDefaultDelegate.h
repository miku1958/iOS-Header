//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaPlayerUI/MPUHTMLParserDelegate-Protocol.h>

@class NSDictionary, NSString;

@interface _MPUHTMLDefaultDelegate : NSObject <MPUHTMLParserDelegate>
{
    NSDictionary *_defaultAttributes;
}

@property (readonly, copy) NSString *debugDescription;
@property (strong, nonatomic) NSDictionary *defaultAttributes; // @synthesize defaultAttributes=_defaultAttributes;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)defaultAttributesForParser:(id)arg1;
- (id)parser:(id)arg1 attributesForTagName:(id)arg2 tagAttributes:(id)arg3 currentState:(id)arg4;
- (id)parser:(id)arg1 prependStringForTagName:(id)arg2;

@end

