//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface XMLNode : NSObject
{
    struct _xmlNode *_xmlNode;
}

+ (id)getJavascriptFromNode:(struct _xmlNode *)arg1;
+ (id)stringValueForAttribute:(id)arg1 inNode:(struct _xmlNode *)arg2;
- (long long)_intValueFromAttribute:(id)arg1;
- (id)_stringValueFromAttribute:(id)arg1;
- (void)dealloc;
- (id)initWithNode:(struct _xmlNode *)arg1;
- (void)setXmlNode:(struct _xmlNode *)arg1;
- (struct _xmlNode *)xmlNode;

@end
