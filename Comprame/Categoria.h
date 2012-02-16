//
//  Categoria.h
//  Comprame
//
//  Created by Antonio Gil Sánchez on 09/02/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface Categoria : NSManagedObject

@property (nonatomic, retain) NSNumber * id_cate;
@property (nonatomic, retain) NSString * nombre_cate;
@property (nonatomic, retain) NSNumber * orden_cate;

@end
