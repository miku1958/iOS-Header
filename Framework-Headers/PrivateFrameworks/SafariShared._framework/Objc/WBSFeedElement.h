//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSMutableString, NSString;

@interface WBSFeedElement : NSObject
{
    NSMutableDictionary *_children;
    NSMutableString *_content;
    NSString *_name;
    NSDictionary *_attributes;
    NSString *_namespaceURI;
}

@property (copy, nonatomic) NSDictionary *attributes; // @synthesize attributes=_attributes;
@property (readonly, copy, nonatomic) NSDictionary *children; // @synthesize children=_children;
@property (copy, nonatomic) NSString *content; // @synthesize content=_content;
@property (copy, nonatomic) NSString *name; // @synthesize name=_name;
@property (copy, nonatomic) NSString *namespaceURI; // @synthesize namespaceURI=_namespaceURI;

- (void).cxx_destruct;
- (void)addChildElement:(id)arg1;
- (void)appendContent:(id)arg1;
- (id)childWithName:(id)arg1;
- (id)childrenWithName:(id)arg1;
- (id)childrenWithName:(id)arg1 namespace:(id)arg2;
- (id)description;
- (id)init;
- (id)textOfChildWithName:(id)arg1;
- (id)textOfChildWithName:(id)arg1 namespace:(id)arg2;

@end

