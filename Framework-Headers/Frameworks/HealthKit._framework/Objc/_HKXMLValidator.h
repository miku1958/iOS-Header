//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface _HKXMLValidator : NSObject
{
    struct _xmlSchema *_xsdSchema;
}

- (void)dealloc;
- (id)initWithXSD:(id)arg1;
- (BOOL)validateXML:(id)arg1 simpleError:(id *)arg2 detailedErrors:(id *)arg3;

@end
