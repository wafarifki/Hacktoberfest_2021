/**
* @param root: A Tree
* @return: Preorder in ArrayList which contains node values.
*/
public List<Integer> preorderTraversal(TreeNode root) {
  if (root == null) {
    return new ArrayList<>();
  }

  List<Integer> rst = new ArrayList<>();
  Stack<TreeNode> stack = new Stack<>();
  stack.push(root);

  while (!stack.empty()) {
    TreeNode node = stack.pop();
    rst.add(node.val);
    if (node.right != null) {
      stack.push(node.right);
    }
    if (node.left != null) {
      stack.push(node.left);
    }
  }

  return rst;
}
