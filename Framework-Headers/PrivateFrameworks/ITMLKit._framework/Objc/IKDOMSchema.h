//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface IKDOMSchema : NSObject
{
    struct _xmlSchema *_schemaPtr;
}

- (void)dealloc;
- (id)initWithSchemaData:(id)arg1;
- (BOOL)validateDocument:(id)arg1 error:(id *)arg2;

@end
