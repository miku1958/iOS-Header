//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface TSDGLFrameBufferTextureLookupInfo : NSObject
{
    unsigned int _attachment;
    unsigned int _textureName;
    long long _indexOnAttachment;
    NSString *_name;
    struct CGSize _textureSize;
}

@property (nonatomic) unsigned int attachment; // @synthesize attachment=_attachment;
@property (nonatomic) long long indexOnAttachment; // @synthesize indexOnAttachment=_indexOnAttachment;
@property (readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property (readonly, nonatomic) unsigned int textureName; // @synthesize textureName=_textureName;
@property (readonly, nonatomic) struct CGSize textureSize; // @synthesize textureSize=_textureSize;

+ (id)textureLookupInfoWithAttachment:(unsigned int)arg1 indexOnAttachment:(long long)arg2 textureName:(unsigned int)arg3 textureSize:(struct CGSize)arg4 name:(id)arg5;
- (void)dealloc;
- (id)description;
- (id)initWithAttachment:(unsigned int)arg1 indexOnAttachment:(long long)arg2 textureName:(unsigned int)arg3 textureSize:(struct CGSize)arg4 name:(id)arg5;

@end

