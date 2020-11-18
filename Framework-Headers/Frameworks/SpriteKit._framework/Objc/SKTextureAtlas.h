//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpriteKit/NSCoding-Protocol.h>

@class NSArray, NSDictionary, NSString;

@interface SKTextureAtlas : NSObject <NSCoding>
{
    NSDictionary *_textureDict;
    NSString *_atlasName;
    BOOL _isCUIImageAtlas;
    struct unordered_map<std::__1::basic_string<char>, SKTexture *, std::__1::hash<std::__1::basic_string<char>>, std::__1::equal_to<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, SKTexture *>>> _textureMap;
}

@property (readonly, nonatomic) NSArray *textureNames;

+ (void)_exportAtlasWithDictionary:(id)arg1 toFile:(id)arg2;
+ (void)_exportAtlasWithDictionary:(id)arg1 toFile:(id)arg2 forcePOT:(BOOL)arg3;
+ (id)atlasFromCUIImageAtlas:(id)arg1 withName:(id)arg2;
+ (id)atlasNamed:(id)arg1;
+ (id)atlasWithDictionary:(id)arg1;
+ (BOOL)canUseObjectForAtlas:(id)arg1;
+ (struct CGImage *)createCGImageFromCUINamedImage:(struct CGImage *)arg1 withSize:(struct CGSize)arg2 atRect:(struct CGRect)arg3;
+ (id)findTextureNamed:(id)arg1;
+ (id)getSupportedPostfixes;
+ (void)preloadTextureAtlases:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
+ (void)preloadTextureAtlasesNamed:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_copyImageData;
- (void)_prePopulateCache;
- (void)commonInit;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)findTextureNamedFromAtlas:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)loadTextures;
- (void)loadTexturesFromCUIImageAtlas:(id)arg1;
- (void)parseAtlasPropertyList:(id)arg1 withPath:(id)arg2;
- (void)preload;
- (void)preloadWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)textureNamed:(id)arg1;
- (void)unload;

@end
