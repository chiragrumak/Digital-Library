public static TreeNode inorderSucc(TreeNode e){

	if(e!=null){
		TreeNode p;
		
		if(e.parent ==  null || e.right != null){
			p = leftMostChild(e.right);
		}else{
			while((p =  e.parent) ! =null){
				if(p.left == e){
					break;
				}
				e = p;
			}
		}
		return p;
	}
	return null;
}

public static TreeNode leftMostChild(TreeNode e){
	if(e ==null) return null;
	while(e.left!=null)
		e = e.left;
	return e;
}
