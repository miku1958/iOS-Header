//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaServices/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface MSVLRUDictionaryNode : NSObject <NSCopying>
{
    id _key;
    id _object;
    MSVLRUDictionaryNode *_next;
    MSVLRUDictionaryNode *_prev;
}

@property (readonly, nonatomic) id key; // @synthesize key=_key;
@property (weak, nonatomic) MSVLRUDictionaryNode *next; // @synthesize next=_next;
@property (strong, nonatomic) id object; // @synthesize object=_object;
@property (weak, nonatomic) MSVLRUDictionaryNode *prev; // @synthesize prev=_prev;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithKey:(id)arg1 object:(id)arg2;

@end
